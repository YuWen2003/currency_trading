#include <stdio.h>

int main()
{
    /* (1 <= N <= 20, 1 <= M <= 100000000) */
    int N, M, a[20];
    scanf("%d %d", &N, &M);

    /* 將輸入之數值存入陣列a中 */
    for(int i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }

    /* check 1~N 組數字組合是否 = M */
    int sss = 0;
    for(int i = 0  ; i < N; i++){
        int sum = a[i];
        if(sum == M){
            printf("%d\n", a[i]);
            sss++;
        }
        for(int j = i + 1; j < N; j++){
            sum = a[i];
            sum += a[j];
            if(sum == M){
                printf("%d %d\n", a[i], a[j]);
                sss++;
            }
            for(int k = j + 1; k < N; k++){
                sum = a[i] + a[j];
                sum += a[k];
                if(sum == M){
                    printf("%d %d %d\n", a[i], a[j], a[k]);
                    sss++;
                }
                for(int l = k + 1; l < N; l++){
                    sum = a[i] + a[j] + a[k];
                    sum += a[l];
                    if(sum == M){
                        printf("%d %d %d %d\n", a[i], a[j], a[k], a[l]);
                        sss++;
                    }
                    for(int m = l + 1; m < N; m++){
                        sum = a[i] + a[j] + a[k] + a[l];
                        sum += a[m];
                        if(sum == M){
                            printf("%d %d %d %d %d\n", a[i], a[j], a[k], a[l], a[m]);
                            sss++;
                        }
                        for(int n = m + 1; n < N; n++){
                            sum = a[i] + a[j] + a[k] + a[l] + a[m];
                            sum += a[n];
                            if(sum == M){
                                printf("%d %d %d %d %d %d\n", a[i], a[j], a[k], a[l], a[m], a[n]);
                                sss++;
                            }
                            for(int o = n + 1; o < N; o++){
                                sum = a[i] + a[j] + a[k] + a[l] + a[m] + a[n];
                                sum += a[o];
                                if(sum == M){
                                    printf("%d %d %d %d %d %d %d\n", a[i], a[j], a[k], a[l], a[m], a[n], a[o]);
                                    sss++;
                                }
                                for(int p = o + 1; p < N; p++){
                                    sum = a[i] + a[j] + a[k] + a[l] + a[m] + a[n] + a[o];
                                    sum += a[p];
                                    if(sum == M){
                                        printf("%d %d %d %d %d %d %d %d\n", a[i], a[j], a[k], a[l], a[m], a[n], a[o], a[p]);
                                        sss++;
                                    }
                                    for(int q = p + 1; q < N; q++){
                                        sum = a[i] + a[j] + a[k] + a[l] + a[m] + a[n] + a[o] + a[p];
                                        sum += a[q];
                                        if(sum == M){
                                            printf("%d %d %d %d %d %d %d %d %d\n", a[i], a[j], a[k], a[l], a[m], a[n], a[o], a[p], a[q]);
                                            sss++;
                                        }
                                        for(int r = q + 1; r < N; r++){
                                            sum = a[i] + a[j] + a[k] + a[l] + a[m] + a[n] + a[o] + a[p] + a[q];
                                            sum += a[r];
                                            if(sum == M){
                                                printf("%d %d %d %d %d %d %d %d %d %d\n", a[i], a[j], a[k], a[l], a[m], a[n], a[o], a[p], a[q], a[r]);
                                                sss++;
                                            }
                                            for(int s = r + 1; s < N; s++){
                                                sum = a[i] + a[j] + a[k] + a[l] + a[m] + a[n] + a[o] + a[p] + a[q] + a[r];
                                                sum += a[s];
                                                if(sum == M){
                                                    printf("%d %d %d %d %d %d %d %d %d %d %d\n", a[i], a[j], a[k], a[l], a[m], a[n], a[o], a[p], a[q], a[r], a[s]);
                                                    sss++;
                                                }
                                                for(int t = s + 1; t < N; t++){
                                                    sum = a[i] + a[j] + a[k] + a[l] + a[m] + a[n] + a[o] + a[p] + a[q] + a[r] + a[s];
                                                    sum += a[t];
                                                    if(sum == M){
                                                        printf("%d %d %d %d %d %d %d %d %d %d %d %d\n", a[i], a[j], a[k], a[l], a[m], a[n], a[o], a[p], a[q], a[r], a[s], a[t]);
                                                        sss++;
                                                    }
                                                    for(int u = t + 1; u < N; u++){
                                                        sum = a[i] + a[j] + a[k] + a[l] + a[m] + a[n] + a[o] + a[p] + a[q] + a[r] + a[s] + a[t];
                                                        sum += a[u];
                                                        if(sum == M){
                                                            printf("%d %d %d %d %d %d %d %d %d %d %d %d %d\n", a[i], a[j], a[k], a[l], a[m], a[n], a[o], a[p], a[q], a[r], a[s], a[t], a[u]);
                                                            sss++;
                                                        }
                                                        for(int v = u + 1; v < N; v++){
                                                            sum = a[i] + a[j] + a[k] + a[l] + a[m] + a[n] + a[o] + a[p] + a[q] + a[r] + a[s] + a[t] + a[u];
                                                            sum += a[v];
                                                            if(sum == M){
                                                                printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", a[i], a[j], a[k], a[l], a[m], a[n], a[o], a[p], a[q], a[r], a[s], a[t], a[u], a[v]);
                                                                sss++;
                                                            }
                                                            for(int w = v + 1; w < N; w++){
                                                                sum = a[i] + a[j] + a[k] + a[l] + a[m] + a[n] + a[o] + a[p] + a[q] + a[r] + a[s] + a[t] + a[u] + a[v];
                                                                sum += a[w];
                                                                if(sum == M){
                                                                    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", a[i], a[j], a[k], a[l], a[m], a[n], a[o], a[p], a[q], a[r], a[s], a[t], a[u], a[v], a[w]);
                                                                    sss++;
                                                                }
                                                                for(int x = w + 1; x < N; x++){
                                                                    sum = a[i] + a[j] + a[k] + a[l] + a[m] + a[n] + a[o] + a[p] + a[q] + a[r] + a[s] + a[t] + a[u] + a[v] + a[w];
                                                                    sum += a[x];
                                                                    if(sum == M){
                                                                        printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", a[i], a[j], a[k], a[l], a[m], a[n], a[o], a[p], a[q], a[r], a[s], a[t], a[u], a[v], a[w], a[x]);
                                                                        sss++;
                                                                    }
                                                                    for(int y = x + 1; y < N; y++){
                                                                        sum = a[i] + a[j] + a[k] + a[l] + a[m] + a[n] + a[o] + a[p] + a[q] + a[r] + a[s] + a[t] + a[u] + a[v] + a[w] + a[x];
                                                                        sum += a[y];
                                                                        if(sum == M){
                                                                            printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", a[i], a[j], a[k], a[l], a[m], a[n], a[o], a[p], a[q], a[r], a[s], a[t], a[u], a[v], a[w], a[x], a[y]);
                                                                            sss++;
                                                                        }
                                                                        for(int z = y + 1; z < N; z++){
                                                                            sum = a[i] + a[j] + a[k] + a[l] + a[m] + a[n] + a[o] + a[p] + a[q] + a[r] + a[s] + a[t] + a[u] + a[v] + a[w] + a[x] + a[y];
                                                                            sum += a[z];
                                                                            if(sum == M){
                                                                                printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", a[i], a[j], a[k], a[l], a[m], a[n], a[o], a[p], a[q], a[r], a[s], a[t], a[u], a[v], a[w], a[x], a[y], a[z]);
                                                                                sss++;
                                                                            }
                                                                            for(int aa = z + 1; aa < N; aa++){
                                                                                sum = a[i] + a[j] + a[k] + a[l] + a[m] + a[n] + a[o] + a[p] + a[q] + a[r] + a[s] + a[t] + a[u] + a[v] + a[w] + a[x] + a[y] + a[z];
                                                                                sum += a[aa];
                                                                                if(sum == M){
                                                                                    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", a[i], a[j], a[k], a[l], a[m], a[n], a[o], a[p], a[q], a[r], a[s], a[t], a[u], a[v], a[w], a[x], a[y], a[z], a[aa]);
                                                                                    sss++;
                                                                                }
                                                                                for(int ab = aa + 1; ab < N; ab++){
                                                                                    sum = a[i] + a[j] + a[k] + a[l] + a[m] + a[n] + a[o] + a[p] + a[q] + a[r] + a[s] + a[t] + a[u] + a[v] + a[w] + a[x] + a[y] + a[z] + a[aa];
                                                                                    sum += a[ab];
                                                                                    if(sum == M){
                                                                                        printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", a[i], a[j], a[k], a[l], a[m], a[n], a[o], a[p], a[q], a[r], a[s], a[t], a[u], a[v], a[w], a[x], a[y], a[z], a[aa], a[ab]);
                                                                                        sss++;
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    /* 若無任何一組數字組合為M則輸出NO */
    if(sss == 0){
        printf("NO\n");
    }

    return 0;
}

/*THIS CODE IS MY OWN WORK. IT WAS WRITTEN WITHOUT CONSULTING CODE WRITTEN BY OTHER STUDENTS OR ANY ONE WHO IS NOT AWARE OF MY REFERENCE. 410125034 陳俞妏*/
