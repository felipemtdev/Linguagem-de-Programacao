float inss(float salario_bruto){
   float inss;
   if (salario_bruto > 0){
       if(salario_bruto >= 1 && salario_bruto <=1518){
           inss =  salario_bruto * 0.075;
       }else if (salario_bruto >= 1518.01 && salario_bruto <= 2793.88){
           inss = salario_bruto * 0.09;
       }else if (salario_bruto >= 2793.89 && salario_bruto <= 4190.83){
           inss = salario_bruto * 0.12;
       }else if (salario_bruto >= 4190.84 && salario_bruto <= 8157.41){
           inss = salario_bruto * 0.14;      
       }else{
           inss = 1142.04;
       }
   }else{
       inss = -1;
   }
        return inss;
}
 
main(){
   float a =0,  i;
   i = inss(a);
   printf("resposta: %f", i);
}
