# Codeforces 501 (Div 3): July 31, 2018

## Overall summary
* Solved 1 problem / 7, 4200/6159
* However, had the correct algorithms for C and D.
* Couldn't come up with a nice algo for B, E1, E2, F: revisit
* Especially, F seems to be a dynamic programming program: look to solve.
* INTEGER OVERFLOW! This bit me for C and D! Always use long long int;
* `typedef long long ll;`


## Useful macro I found:
```c++
#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;

#undef _P
#define _P(...) (void)printf(__VA_ARGS__)
#define FOR(x,to) for(x=0;x<(to);x++)
#define FORR(x,arr) for(auto& x:arr)
#define ITR(x,c) for(__typeof(c.begin()) x=c.begin();x!=c.end();x++)
#define ALL(a) (a.begin()),(a.end())
#define ZERO(a) memset(a,0,sizeof(a))
#define MINUS(a) memset(a,0xff,sizeof(a))
//-------------------------------------------------------
```

## Useful way to print results: push to a vector and print
```cpp
vector<int> ans;
for (...) {
    ans.push_back(i);
}
cout<<ans.size()<<endl;
for(auto i:ans) { cout<<i<<" " };
```