/***************************************************
 * Alex Palcuie
 * Romania - 2016
 * alex [dot] palcuie [at] gmail [dot] com
 * http://blog.palcu.ro/
****************************************************/

#include <algorithm>
#include <bitset>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

using namespace std;

const int N = 1<<10;
const int INF = 0x3f3f3f3f;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("default.in", "r", stdin);
    freopen("default.out", "w", stdout);
    #endif
    
    tuple<string, int, float> x {"a", 1, 3.14};
    cerr << get<3>(x) << endl;
    
    return 0;
}

