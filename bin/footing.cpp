/**
 * @file footing.cpp
 *
 * @version 01.01 202155
 *
 * @brief footing
 *
 * @ingroup footing
 * (Note: this needs exactly one @defgroup somewhere)
 *
 * @author Castellani Davide
 *
 * Contact: contacts@castellanidavide.it
 *
 */

// Includes
#include <bits/stdc++.h>
using namespace std;

// Variabiles
int N, M, tmp1, tmp2, tmp3, result;
vector <vector <pair<int, int> > > conn;

void my_search (int init; int pos; vector <int> old, int street) {
    if (pos != init) {

    }
    for (size_t i; i < conn[pos].size(); ++i) {

    }
}

// Main code
int main()
{
  // Cncomment the following lines if you want to read/write from files
  freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  // Input
  cin >> N >> M;
  conn.resize(N);
  result = INT_MIN;

  for(size_t i = 0; i < M; ++i) {
    cin >> tmp1 >> tmp2 >> tmp3;
    conn[tmp1].push_back(make_pair(tmp2, tmp3));
    conn[tmp2].push_back(make_pair(tmp1, tmp3));
  }

  for (size_t i = 0; i < N; ++i) {

  }

  // Output
  cout << result << endl;

  // End
  return 0;
}
