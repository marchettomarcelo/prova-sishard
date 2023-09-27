// Seu código da funcao1_solucao

long funcao1_solucao(int edi){
    int eax = 2;
    int edx = 1;

    while (eax <= edi){                        
        edx *= eax;
        eax++;
    }
    return (long) edx;
}
