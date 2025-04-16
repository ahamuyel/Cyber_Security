#include <iostream>
#include <chrono> // biblioteca para medir tempo

int main()
{
    auto start = std::chrono::high_resolution_clock::now();// marca o tempo atual
    int length = 52;
    int i, j, k, l;

    i = 0;
    while (i < length)
    {
        j = 0;
        while (j < length)
        {
            k = 0;
            while (k < length)
            {
                l = 0;
                while (l < length)
                    std::cout <<i<<" "<<j<<" "<<k<<" "<<l++<<"\n";
                k++;
            }
            j++;
        }
        i++;
    }
    auto end = std::chrono::high_resolution_clock::now();// Marca o tempo final
    std::chrono::duration<double> elapse = end - start;// calcula a diferença
    std::cout << "tempo de execução: "<< elapse.count() << "segundos\n";
    return (0);
}