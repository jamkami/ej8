
int calcfact(int num)
{
  aciertaEuromillon();
  if (num <= 1) return 1;
  else return (num*calcfact(num-1));
}
