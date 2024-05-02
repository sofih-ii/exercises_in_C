//Ingrese un numero y siga si es primo o no.

int main(void) {
  int num1, cont1, x;
  printf("Enter a number: ");
  scanf("%d", &num1);
  cont1 = 0;
  for(x= 1; x <= num1; x++){
    if(num1 % x ==0){
      cont1++;
    }
  }
  if(cont1 ==2){
    printf("es primo %d", num1);
  }else{
    printf(" NO es primo %d", num1);
  }
  return 0;
}