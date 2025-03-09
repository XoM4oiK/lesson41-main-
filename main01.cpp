#include "util.h"


int main() {
    int matrix[N][N] = {
    { 1, 2, 3, 4, 5 }, 
    { 1, 2, 3, 4, 5 }, 
    { 1, 2, 3, 4, 5 },
    { 1, 2, 3, 4, 5 },
    { 1, 2, 3, 4, 5 }
    };

    //cout << "Input elements matrix:" << endl;
    //for (int i = 0; i < N; ++i) {
    //    for (int j = 0; j < N; ++j) {
    //        cin >> matrix[i][j];
    //    }
    //}
    


    cout << "GLAV HIGH_SUM: " << sum_of_glav_dioganal_high(matrix) << endl;
    cout << "GLAV below_SUM: " << elements_below_the_main_diagonal(matrix) << endl;
    cout << "Secondary HIGH_SUM: " << sum_Above_Secondary_Diagonal(matrix) << endl;
    cout << "Secondary  below_SUM: " << sum_Below_Secondary_Diagonal(matrix) << endl;
    return 0;
}

