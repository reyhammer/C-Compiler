/* Um programa para calcular o mdc segundo o algoritmo de Euclides. */
/* Um programa para calcular o mdc segundo o algoritmo de Euclides. */

int gcd (int u, int v) {
  if (v == 0) return u;
  else return gcd (v, u-u/v*v);
  /* u-u/v*v == u mod v */
}

void main(void) {
  int x; int y;
  int a
  x = input();
  y = input();
  int c
  output(gcd(x, y));
}
