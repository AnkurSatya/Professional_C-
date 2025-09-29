#include <cstddef>
#include <vector>

// Implementation using pointers
void separateOddsAndEvens(const int arr [], std::size_t size, int** odds, size_t* numOdds, int** evens, size_t* numEvens){
    *numOdds = *numEvens = 0;

    for(int i=0; i < size; ++i){
        if (arr[i] % 2 == 1) ++(*numOdds);
        else ++(*numEvens);
    }

    *odds = new int[*numOdds];
    *evens = new int[*numEvens];

    size_t oddPos = 0, evenPos = 0;
    for (int i=0; i < size; ++i){
        if (arr[i] % 2 == 1) (*odds)[oddPos++] = arr[i];
        else (*evens)[evenPos++] = arr[i];
    }
};

// Implementation using references
void separateOddsAndEvens(const int arr[], std::size_t size, int*& odds, size_t& numOdds, int*& evens, size_t& numEvens){
    numOdds = numEvens = 0;
    for (int i = 0; i < size; ++i){
        if (arr[i] % 2 == 1) ++numOdds;
        else ++numEvens;
    }

    odds = new int[numOdds];
    evens = new int[numEvens];

    size_t oddPos {0}, evenPos {0};
    for (int i=0; i<size; ++i){
        if (arr[i] %2 == 1) odds[oddPos++] = arr[i];
        else evens[evenPos++] = arr[i];
    }
};

// Implementation using STL vectors
void separateOddsAndEvens(const std::vector<int>& arr, std::vector<int>& odds, std::vector<int>& evens){
    for (int i : arr){
        if (i %2 == 1) odds.push_back(i);
        else evens.push_back(i);
    }
};

struct OddsAndEvens{ std::vector<int> odds, evens; };

// Implementation using STL vectors considering NRVO optimization
OddsAndEvens separateOddsAndEvens(const std::vector<int>& arr){
    std::vector <int> odds, evens;
    for (int i : arr){
        if (i %2 == 1) odds.push_back(i);
        else evens.push_back(i);
    }
    return OddsAndEvens{ .odds {odds}, .evens{evens} };
};
