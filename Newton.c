#include <stdio.h>
#include <stdlib.h>

double funcao(double x)
{
    return sin(x) - exp(-x);
}

double derivada(double x)
{
    return cos(x) + exp(-x);
}

double absGambiarra(double x){
    // Essa parte é necessária porque o método abs padrão trabalha apenas com inteiros
    if (x<0)
    {
        return -1*x;
    }
    return x;    
}

int main(int argc, char const *argv[])
{
    double funcaoVar = 1, derivadaVar = 0, Xn = 0;
    printf("Valor de x inicial: %lf \n", Xn);
    while (absGambiarra(funcaoVar) > 0.0001){
        funcaoVar = funcao(Xn);
        derivadaVar = derivada(Xn);
        printf("Xn = %lf,  f(x) = %lf, f\'(x) = %lf\n", Xn, funcaoVar, derivadaVar);
        Xn = Xn - funcaoVar / derivadaVar;
    }
    printf("Condicao de parada satisfeita \n");
    return 0;
}
