//12S25009 - Angrini necy sirait
#include <stdio.h>

int main(int _argc, char **_argv)
{
  //code
  
    int jumlah;
    float harga;
    float total;
    float diskon = 0;
    float bayar;

    scanf("%d",&jumlah);
    scanf("%f",&harga);

    total = jumlah * harga;

    if(total > 500000){
        diskon = total * 0.15;
    }
    else if(total >= 100000){
        diskon = total * 0.10;
    }
    else if(total > 50000){
        diskon = total * 0.05;
    }

    bayar = total - diskon;

    if(diskon == 0){
        printf("---\n");
    }
    else{
        printf("%.2f\n",diskon);
    }

    printf("%.2f\n",bayar);

    return 0;
}


