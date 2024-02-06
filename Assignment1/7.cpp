#include<iostream>
using namespace std;
int main(){
    char sentence[INT16_MAX];
    cin.get(sentence,INT16_MAX);
    char words[4000][100];
    int ctw = 0;
    int j=0;
    for(int i = 0;sentence[i]!='\0';i++){
        if (sentence[i]==' '){
            ctw++;
            j = 0;
            continue;
        }
        words[ctw][j]=sentence[i];
        j++;
    }
    int k = 0;
    for(int i = 0;i<ctw+1;i++){
        k = 0;
        while(words[i][k]!='\0'){
            cout<<words[i][k];
            k++;
        }
        cout<<endl;
    }
}
