// week12-1 好玩的地鼠(有圖片)
// File-Preference安列插入

PImage img; // 圖片的變數 img
// 尤地老爺給你 桌面 gopher.png 拉到程式裡

void setup() {
    size(300, 300); // 視窗大小
    img = loadImage("gopher.png"); // 載入圖檔
}

float a = 0;

void draw() {
    a += 0.03;
    background(128); // 灰色背景

    // float x = 100 + 50*cos(a), y = 100 + 50*sin(a);
    float x = 100 + 100*cos(a), y = 250 + 50*sin(a);

    image(img, x, y, 100, 100);

    // image(img, x, y, 100, 100); // 畫出圖片
    // 函式呼叫，有5個參數：(圖片, x, y, 寬, 高)
}
