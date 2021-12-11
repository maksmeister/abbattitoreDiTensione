# problema riassegnazione variabile

Stavo creando una funzione ([vedi](https://github.com/maksmeister/abbattitoreDiTensione/blame/master/main.cpp#L8-L27)) per abbreviare le esponenze per un'output più semplice da leggere come seguito dall'esempio

```
1.2e+07Ω ➔ 12MΩ
```

Durante lo sviluppo notai che non avviene la riassegnazione della variabile `y` (che sarebbe una copia del parametro `x` per preservare il valore originale) all'interno del ciclo while

![""](/docs/1.png)

Pensando che sia un problema di variabili di diverso tipo cambiai tutti i valori in `float`

![""](/docs/2.png)

Ricevetti, però, sempre lo stesso output:
```
[Running] g++ "/home/max/Documents/cpp/"main.cpp -o "/home/max/Documents/cpp/"build/main && "/home/max/Documents/cpp/"build/main

y: 8200
y: 8.2
y: 0.0082
y: 8.2e-06
y: 8.2e-09
y: 8.2e-12
y: 8.2e-15
y: 8.2e-18
y: 8.2e-21
y: 8.2e-24
y: 8.2e-27
y: 8.2e-30
y: 8.2e-33
y: 8.2e-36
y: 8.2e-39
y: 8.2004e-42
cnt: 16
tmp: 8.2e-16


[Done] exited with code=0 in 0.331 seconds
```

Osservando si può vedere che il valore di `y` in effetti viene cambiato ma il programma non esce dal ciclo anche se `y` è minore di 0