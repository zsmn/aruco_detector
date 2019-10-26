# aruco_detector

## What is it?
Uma marcação de ArUco é um quadrado composto por uma borda preta e uma matriz binaria interna que determina seu identificador (id).
A borda preta facilita sua rápida detecção e a codificação binária permite que técnicas de correção e ajuste de erro sejam aplicada mais facilmente.

Exemplos de marcações de ArUco
![alt text](https://docs.opencv.org/trunk/markers.jpg)

Também é visto que uma marcação pode se encontrar rotacionada, mas o processo de detecção precisa ser capaz de determinar sua rotação original.

## Compiling

Para compilar esse projeto é necessário primeiro clonar este repositório:

```
git clone https://github.com/zsmn/aruco_detector.git
```

Logo após isso, rodar o Makfile:

```
make
```

Após executado o Makefile, o executável "main" será criado, então basta executá-lo:

```
./main
```