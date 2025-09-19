float inss(float salario_bruto){
 
   float resultado;
 
   if (salario_bruto > 0){
 
       if(salario_bruto >= 1 && salario_bruto <=1518){
           
           resultado =  salario_bruto * 0.075;
          
       }else if (salario_bruto >= 1518.01 && salario_bruto <= 2793.88){
           
           resultado = salario_bruto * 0.09;
          
       }else if (salario_bruto >= 2793.89 && salario_bruto <= 4190.83){
           
           resultado = salario_bruto * 0.12;
          
       }else if (salario_bruto >= 4190.84 && salario_bruto <= 8157.41){
           
            resultado = salario_bruto * 0.14;      
         	
       }else{
 
           resultado = 1142.04;   
 
       }
 
   }else{
 
       resultado = -1;
   }
        return resultado;
 
}
 
main(){
 
   float a = 1800,  i;
 
   i = inss(a);
 
   printf("resposta: %f", i);
 
}