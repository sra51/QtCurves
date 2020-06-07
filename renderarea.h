#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QWidget>
#include <QColor>

class RenderArea : public QWidget
{
    Q_OBJECT
public:
    explicit RenderArea(QWidget *parent = nullptr);

    QSize minimumSizeHint() const Q_DECL_OVERRIDE;
    QSize sizeHint() const Q_DECL_OVERRIDE;

    enum ShapeType { Astroid, Cycloid, HuygensCycloid, HypoCycloid, Line  };

    void setBackgroundColor (QColor color) { mBackGroundColor = color;} // setter
    QColor backroundColor () const { return mBackGroundColor; }  //getter

    void setShape (ShapeType shape) { mShape = shape; on_shape_changed (); }
    ShapeType shape () const { return mShape; }

protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

private:
    QColor mBackGroundColor;
    QColor mShapeColor;
    ShapeType mShape;
    float mIntervalLength;
    float mScale;
    int mStepCount;

private:
    void on_shape_changed ();
    QPointF compute (float t);  // dispatch function based on mShape's type
    QPointF compute_astroid (float);
    QPointF compute_cycloid (float);
    QPointF compute_huygens (float);
    QPointF compute_hypo (float);
    QPointF compute_line (float);

signals:

public slots:
};

#endif // RENDERAREA_H
