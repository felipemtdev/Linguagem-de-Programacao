float, calc_media_arit(float nota1, float nota2){
    float media;
    if(nota1 >= 0 && nota1 <=10){
        if(nota2 >= 0 && nota2 <=10){
            media=(nota1 + nota2)/2;

        }else{
            media=-2
        }

    }else{
        media=-1
    }
     returmn media;
}///func///
main(){
    float a=3,b=7, m;
    m = calc_media_arit(a, b);
    printf("resultado: %f", m);
}
