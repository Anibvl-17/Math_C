// Devuelve la potencia de un numero n.
// Donde n es un float, y exp un entero.
// Asi: n^exp
// Si exp < 0 devuelve 0.
float potencia(float n, int exp)
{
	if (exp<0)
	{
  	int i;
  	float pot=1;
  	for (i=1; i<=exp; i++)
			pot *= n;
  	return pot;
	}
	else
		return 0;
}
