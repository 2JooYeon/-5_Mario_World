# 팀과제 5 Mario World  
## 함수 설명

### 주연
void entrance(int x, int y, int z)  
: 마을로 들어가는 입구 통로를 만드는 함수  
void logo(int x, int y, int z)  
: 마을 입구에 ‘SUPER MARIO’ 로고를 만드는 함수  
void mario(int x, int y, int z)  
: 마을 입구에 마리오 캐릭터를 만드는 함수  
void greencircle1(int x, int y, int z) / void greencircle2(int x, int y, int z)  
: 마을 중앙 광장에 초록 원기둥을 만들기 위해 만든 원 함수  
void greencylinder(int x, int y, int z)  
: 마을 중앙 광장에 초록 원기둥을 만드는 함수  
void leaf(int x, int y, int z) / void leaf2(int x, int y, int z)  
: 초록 원기둥 안에 들어갈 식물 잎을 만드는 함수  
void plant(int x, int y, int z)  
: 초록 원기둥 안에 들어갈 식물을 만드는 함수  
void plus(int x, int y, int z)  
: 초록 원기둥과 식물을 합친 함수  
void squre(int x, int y, int z)  
: 마을 바닥 타일을 담당하는 함수  
void character(int x, int y, int z)  
: 마을 입구 쪽을 꾸며주는 초록 식물 캐릭터를 만드는 함수  
void set(int x, int y, int z)  
: 초록 식물 캐릭터 5개를 세트로 만든 함수  
void jooyeon(int x, int y, int z)  
: 마을 입구 + 광장을 꾸미는 최종 함수  
### 홍찬
void arch(int x, int y, int z)  
: 아치를 만드는 함수  
void archrow(int a, int b, int c)  
: void arch 함수를 이용하여 양 옆으로 아치를 늘어놓는 함수  
void redcarpet(int x, int y, int z)  
: 바닥에 레드카펫을 까는 함수  
void table(int x, int y, int z)  
: 5x5탁자를 만드는 함수  
void tablerow(int a, int b, int c)  
: void table 함수를 이용하여 실내에 테이블을  양 옆으로 늘어 놓는 함수  
void wall(int x, int y, int z)  
: 앞뒤로 흰색 벽을 놓는 함수  
void frontdoor(int x, int y, int z)  
: 앞에 문과 반구형 유리를  만드는 함수  
void back(int x, int y, int z)  
: 뒤에 아치를 만들고 빈공간을 유리로 채우는 함수  
void floor(int x, int y, int z)  
: 3개층으로 바닥을 까는 함수  
void window(int x, int y, int z)  
: 아치의 빈공간을 유리로 채워놓는 함수  
void windowrow(int a, int b, int c)  
: void window 함수를 이용하여 양 옆의 아치 빈공간을 유리로 채워놓는 함수  
void stair(int x, int y, int z)  
: 계단을 만드는 함수. 계단의 중간은 빨간색 블록을 놓아 레드카펫이 덮여있는 느낌을 주었다.  
void roof(int x, int y, int z)  
: 지붕을 덮는 함수  
void redmushroom(int x, int y, int z)  
: 빨간색 버섯(파워업 버섯)을 세우는 함수  
void greenmushroom(int x, int y, int z)  
: 초록색 버섯(1up 버섯)을 세우는 함수  
void star(int x, int y, int z)  
: 별을 바닥에 놓는 함수  
void hongchan(int x, int y, int z)  
: 위의 함수를 합쳐놓아 게스트하우스를 최종 완성하는 함수  
### 두홍
void Large_circle(int x, int y, int z)    
: 큰 단층 원을 만드는 함수  
void Large_cylinder(int x, int y, int z)  
: for문을 사용해서 큰 단층 원을 반복해 큰 원기둥을 만드는 함수  
void Small_circle(int x, int y, int z)   
: 작은 단층 원을 만드는 함수  
void Small_cylinder(int x, int y, int z)  
: for문을 사용해서 작은 단층 원을 반복해 작은 원기둥을 만드는 함수  
void Front_door(int x, int y, int z)   
: 큰 원기둥과 연결하여 성의 정문을 만드는 함수  
void Wall(int x, int y, int z)   
: for문을 사용해서 성벽을 만드는 함수  
void First_floor(int x, int y, int z)  
: 건물 아래층에 하얀색 양털블록을 까는 함수  
void Glass(int x, int y, int z)  
: 건물 1층과 천장에 유리블록을 까는 함수  
void Roof(int x, int y, int z)   
: Small_cylinder 함수로 만든 원기둥 위에 지붕을 만드는 함수  
void Indoor(int x, int y, int z)  
: 카펫과 의자, 무늬 등 성 내부를 꾸미는 함수  
void Outdoor(int x, int y, int z)   
: 성 외부를 꾸미는 함수  
void Window(int x, int y, int z)  
: 성의 중심이 되는 원기둥에 air 블록으로 구멍을 내서 창문을 만드는 함수  
void Light(int x, int y, int z)  
: 큰 건물에 있는 샹들리에의 느낌으로 천장에 달려있는 물음표 박스를 만드는 함수  
void Picture(int x, int y, int z)  
: 성벽에 마리오와 루이지의 그림을 그려서 마리오의 집이라는 것을 표현하는 함수  
void doohong(int x, int y, int z)   
: 위의 함수들을 모두 합쳐서 좌표 하나를 기준으로 성 전체를 만드는 함수  
void ***Color***Car***Direction***(int x, int y, int z)  
: 색깔별로 차를 만드는 함수, 앞을 보는 차와 뒤를 보는 차 두가지로 frontside와 backside로 나누어서 만들었다.    
###도균  
void startline(int px, int py, int pz)  
: 출발선  
void road_straight1(int px, int py, int pz)  
: z축선상 직선트랙을 구성하는 함수1  
void road_straight2(int px, int py, int pz)  
: z축선상 직선트랙을 구성하는 함수2  
void road_straight3(int px, int py, int pz)  
: x축선상 직선트랙을 구성하는 함수3  
void road_straight4(int px, int py, int pz)  
: x축선상 직선트랙을 구성하는 함수4  
void road_straight_z(int px, int py, int pz, int length)  
: -z방향 직선트랙  
void road_straight_z2(int px, int py, int pz, int length)  
: +z방향 직선트랙  
void road_straight_x(int px, int py, int pz, int length)  
: +x방향 직선트랙  
void road_turnright1(int px, int py, int pz)  
: -z방향 직선- > +x방향 직선으로 갈 때 코너  
void road_turnright2(int px, int py, int pz)  
: +x방향 직선- > +z방향 직선으로 갈 때 코너  
void road_turnright3(int px, int py, int pz)  
: +z방향 직선- > -x방향 직선으로 갈 때 코너  
void road_turnright4(int px, int py, int pz)  
: -x방향 직선- > -z방향 직선으로 갈 때 코너  
void imsi_straight(int px, int py, int pz)  
: 길이가 모자른 직선트랙 마저 채워주는 함수  



