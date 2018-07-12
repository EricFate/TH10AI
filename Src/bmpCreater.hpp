#pragma once
#include <cstdint>

//����BmpͼƬ������RGBֵ������ͼƬ���ش�С������ͼƬ�洢·��
void generateBmp(void* pData, int width, int height, const char* filename); 

struct Pixel {
    uint8_t b, g, r;
    constexpr Pixel(): b(0), g(0), r(0) {}
    constexpr Pixel(uint8_t r_, uint8_t g_, uint8_t b_) : b(b_), g(g_), r(r_) {}
};
