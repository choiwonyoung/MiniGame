#pragma once
class Image
{
public:
	Image();
	~Image();

	int width();
	int height();

	void Draw( int dstX, int dstY, int srcX, int srcY , int width , int height ) const;

private:
	int m_iWidth;
	int m_iHeight;
	unsigned* m_pData;
};

