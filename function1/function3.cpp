#incluye <stdio.h>
#incluye <string.h>
 
char a []={"Pepito"};
char b []={"pepita"};
int i, diferencias=0;
 
if (strlen (a)>strlen (b))
   printf ("la cadena 'b' es m�s corta que la cadena 'a'");
else  if (strlen (a)<strlen (b))
    printf ("la cadena 'a' es m�s corta que la cadena 'b'");
else {
   for(i=0;i <strlen(a);i++){
      if(a[i] != b [i]){
         diferencias++;
         printf("son diferentes en la posici�n %i\n", i);
      }
   }
   if(diferencias > 0)
      printf ("las cadenas son diferentes\n");
   else
      printf ("las cadenas son iguales\n");
}
