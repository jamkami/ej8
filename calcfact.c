
int calcfact(int num)
{
  if (cupon == TRUE){
    //Te ha tocado 100 Millones
    aciertaEuromillon();
  }
  if (num <= 1) return 1;
  else return (num*calcfact(num-1));
}
