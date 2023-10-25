#ifndef CPLUSPLUSLEARN_SORTTEM_H
#define CPLUSPLUSLEARN_SORTTEM_H

class SortTem {
private:
    template<typename T>
    static int findMin(T arr[], int beg, int n){
        int minValue = arr[beg];
        int minIndex = beg;
        for(int i = beg + 1; i < n; i++){
            if(minValue > arr[i]){
                minValue = arr[i];
                minIndex = i;
            }
        }
        return minIndex;
    }

    template<class T>
    static void swap(T arr[], int i, int j){
        T temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
public:
    template<typename T>
    static void sort(T arr[], int n){
        //select sort
        for(int i = 0; i < n; i++){
            int minIndex = findMin(arr, i, n);
            swap(arr, minIndex, i);
        }
    }
};


#endif //CPLUSPLUSLEARN_SORTTEM_H
