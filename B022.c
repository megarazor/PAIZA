#include <stdio.h>
#include <stdlib.h>

int main(){
    int cand_n, voter_n, speech_n;
    int *cand_votes;
    scanf("%d %d %d", &cand_n, &voter_n, &speech_n);
    cand_votes= malloc(sizeof(int) * cand_n);
    for (int i= 0; i < cand_n; i++){
        cand_votes[i]= 0;
    }
    for (int i= 0; i < speech_n; i++){
        int cur_cand;
        scanf("%d", &cur_cand);
        cur_cand--;
        for (int j= 0; j < cand_n; j++){
            if (j == cur_cand) continue;
            if (cand_votes[j] > 0){
                cand_votes[j]--;
                cand_votes[cur_cand]++;
            }
        }
        if (voter_n > 0){
            voter_n--;
            cand_votes[cur_cand]++;
        }
    }
    
    int max= 0;
    for (int i= 0; i < cand_n; i++){
        if (cand_votes[i] > max){
            max= cand_votes[i];
        }
    }
    for (int i= 0; i < cand_n; i++){
        if (cand_votes[i] == max){
            int real_pos= i + 1;
            printf("%d\n", real_pos);
        }
    }
}