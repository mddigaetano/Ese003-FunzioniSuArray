
int massimo(int valori[], int dimensione){
    int i, max=valori[0];
    for(i=1;i<dimensione;i++)
        if(valori[i]>max)
            max=valori[i];
    return max;
}

int minimo(int valori[], int dimensione){
    int i, min=valori[0];
    for(i=1;i<dimensione;i++)
        if(valori[i]<min)
            min=valori[i];
    return min;
}

float media(int valori[], int dimensione){
    int i;
    float avg=0;
    for(i=0;i<dimensione;i++)
        avg+=valori[i];
    avg/=dimensione;
    return avg;
}