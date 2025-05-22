# 🥹 오늘의 코딩 문제

## 2025-05-22 백만장자 프로젝트 (https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5LrsUaDxcDFAXc&categoryId=AV5LrsUaDxcDFAXc&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=&pageSize=10&pageIndex=1)

### 매매가가 주어졌을 때 N일동안 최대 수익 출력. 하루에 1개만 구매 가능 파는건 제한없음
### 맨 마지막 날의 매매가가 최대라고 생각하고 max = arr.size()-1, 최대값보다 작으면 수익계산, 크면 최댓값 교체`
### 매매가가 10,000원 N의 최대가 1,000,000일 이기 때문에 int 범위 넘어가서 sum -> 최종 수익을 저장할 변수를 long long타입으로 설정해야함
