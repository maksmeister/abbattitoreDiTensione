// programma che dati R1 e R2 e il rapporto di trasformazione, calcolare il valore di R2

#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;

string abbreviatore(float x){
    int cnt = 0;
    float tmp, y = x;
    string multipli[3] = {"Ω", "kΩ", "MΩ"};
    string exp;

    while(y / 1000 > 0){
        cout << "y: " << y << endl;
    	y = y / 1000;
      	cnt++;
    }

    tmp = x / (pow(10, cnt) * 1000);
    // exp = to_string(tmp);
    cout << "cnt: " << cnt << endl;
    cout << "tmp: " << tmp << endl;

  	// return exp+multipli[cnt];
    return "";
}

int main(){
    int i, y;
    const int dimNormalizzati = 12;
    const int dimMatrix = 8;
    float cnt = 1.0;
    float resistenzeNormalizzate[dimNormalizzati] = {1, 1.2, 1.5, 1.8, 2.2, 2.7, 3.3, 3.9, 4.7, 5.6, 6.8, 8.2};
    float resistenze[dimNormalizzati][dimMatrix];

    cout << abbreviatore(8200) << endl;

    for (i=0; i < dimMatrix; i++){
        for (y=0; y < dimNormalizzati; y++){
            resistenze[i][y] = resistenzeNormalizzate[y] * cnt;
        }

        cnt *= 10;
    }

    // per mostrare la tabella
    // for (i=0; i < dimMatrix; i++){
    //     for (y=0; y < dimNormalizzati; y++){
    //         cout << resistenze[i][y] << " ";
    //     }

    //     cout << endl;
    // }

    return 0;
}