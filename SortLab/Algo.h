#ifndef ALGO_H
#define ALGO_H
#include <iostream>

template <class T>
class Algo
{
        public:
        static void BubbleSort(T* array, int count)
        {
                for(int i = count - 1; i >= 0 ; --i)
                {
                        for(int j = 1; j <= i ; ++j)
                        {
                                if(array[j-1] > array[j])
                                {
                                        T temp = array[j-1];
                                        array[j-1] = array[j];
                                        array[j] = temp;
                                }
                        }       
                }
        }

        static void BubbleSortOptimized(T* array, int count)
        {
                bool sorted = true;
                for(int i = count - 1; i >= 0 ; --i)
                {
                        sorted = false;
                        for(int j = 1; j <= i ; ++j)
                        {
                                if(array[j-1] > array[j])
                                {
                                        T temp = array[j-1];
                                        array[j-1] = array[j];
                                        array[j] = temp;
                                        sorted = true;
                                }
                        }       
                        if(sorted == false) break;
                        
                }
        }
};
#endif