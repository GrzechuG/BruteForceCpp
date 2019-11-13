#include <iostream>
#include <string.h>
using namespace std;


void brute(char * zestaw, int zestaw_size,int rozmiar) {
    int temp[rozmiar];
    for(int i=0; i<rozmiar; i++)
        temp[i]=0;


        //add o   ne next
         int i = 0;
         do{
            for(int t:temp){
                cout<<zestaw[t];
            }
            temp[i]++;

            cout<<endl;
            if(temp[i]>=zestaw_size){
                temp[i]=0;
                i++;
                if(i>=rozmiar){
                   break;
                }

            }else{
               i=0;
            }

         }while(true);

}

int main() {

    char * znaki = "abcdefghijklmnopqrstuvwxyz";
    const int max_password_length = 10;
    for(int i = 2; i<max_password_length; i++ ){
        brute(znaki, strlen(znaki), i);
    }
    return 0;
}
