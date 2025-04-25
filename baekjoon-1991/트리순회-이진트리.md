# 🥹 오늘의 코딩 문제

## 2025-04-14 트리 순회 - 이진트리(https://www.acmicpc.net/problem/1991)
```
typedef node{
int count;//인덱스 구분하기 위해서 val로 입력된 문자에서 'A'-1 = 64 (A = 65) 뺀 값-> A = 1, B = 2 . . . 
char val;
char right;
char left;
}
```
1. 전위순회 루트 → 왼쪽자식 → 오른쪽자식
2. 중위순회 왼쪽→루트→오른쪽
3. 후위순회 왼쪽→오른쪽→루트

- 재귀함수로 구현
```  
    void presearch(vector<node> tree, node i)
    {
        /*전위*/cout<<i.val;
    
        if(i.left != ’.’)//.이면 없는거
    
        {
             presearch(tree,tree[ i.left-64]);
        }    

        /*중위*/cout<<i.val;

        if(i.right!=’.’)
        {
             presearch(tree,tree[ i.right-64]);
        }

        /*후위*/ cout<<i.val;
    
    }
```
