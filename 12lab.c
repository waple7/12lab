#include<stdio.h>
#include<direct.h>

int main(int argc,char* argv[]){
    FILE* fout;
    fopen_s(&fout,"game.txt","w");
    int p=1;
    while(p>0){
        char s[80];
        gets(s);
        if(s[0]=='*')
            break;
        else {
            fprintf(fout, "%s\n", s);
            fflush(fout);
            _mkdir(s);
        }
    }
    fclose(fout);
}
