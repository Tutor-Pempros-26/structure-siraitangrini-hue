// 12S25009 - Angrini necy sirait

#include <stdio.h>

int main(int _argv, char **_argc)
{
    char operator;
    int angka;
    int hasil;
    int i;

    scanf("%c",&operator);

    if(operator == '+'){
        hasil = 0;
    }
    else if(operator == '-'){
        hasil = 0;
    }
    else if(operator == '*'){
        hasil = 1;
    }

    printf("%c\n",operator);

    for(i=0;i<5;i++){

        scanf("%d",&angka);

        if(angka == -1){
            printf("-1\n");
            printf("0\n");
            break;
        }

        printf("%d\n",angka);

        if(operator == '+'){
            hasil = hasil + angka;
        }
        else if(operator == '-'){
            hasil = hasil - angka;
        }
        else if(operator == '*'){
            hasil = hasil * angka;
        }

        printf("%d\n",hasil);
    }

    return 0;
}