// Devuelve el factorial de un numero n.
// Si es menor a 0, devuelve -1.
int factorial(int n)
{
  if (n>=0)
  {
    int i, fact=1;
    for (i=1; i<n; i++)
      fact *= i;
    return fact;
  }
  else
    return 0;
}
