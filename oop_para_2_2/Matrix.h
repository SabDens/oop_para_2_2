#pragma once
class ColsRows
{
private:
    size_t _cols = 0;
    size_t _rows = 0;

public:
    ColsRows(size_t rows, size_t cols)
        : _rows(rows), _cols(cols)
    {}

    size_t GetCols()
    {
        return _cols; 
    }
    void SetCols(size_t value)
    {
        _cols = value;
    }

    size_t GetRows()
    {
        return _rows;
    }

    void SetRows(size_t value)
    {
        _rows = value;
    }
};

class Matrix
{
private:
	const int DEF_ROW = 3;
	const int DEF_COL = 3;
	int** _data = nullptr;
    size_t _cols = 3;
    size_t _rows = 3;
    //ColsRows _colsRows;
public:
	Matrix();
	Matrix(int value);
	Matrix(size_t rows);
	Matrix(size_t rows, size_t cols);
	~Matrix();
	size_t GetCols();
	void SetCols(size_t cols);
	void Init();
	void Print();
	void PushFrontRow();
	void PushBackRow();
};