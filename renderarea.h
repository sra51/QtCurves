#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QWidget>
#include <QColor>
#include <QPen>

class RenderArea : public QWidget
{
    Q_OBJECT
public:
    explicit RenderArea(QWidget *parent = nullptr);

    QSize minimumSizeHint() const Q_DECL_OVERRIDE;
    QSize sizeHint() const Q_DECL_OVERRIDE;

    enum ShapeType {Astroid,
                    Cycloid,
                    HuygensCycloid,
                    HypoCycloid,
                    Line,
                    Circle,
                    Ellipse,
                    Fancy,
                    Starfish,
                    Cloud1,
                    Cloud2
                   };

    void setBackgroundColor (QColor color) { mBackGroundColor = color; repaint (); } // setter
    QColor backroundColor () const { return mBackGroundColor; }  //getter

    void setShapeColor (QColor color) { mPen.setColor(color); repaint(); }
    QColor shapeColor () const { return mPen.color(); }

    void setShape (ShapeType shape) { mShape = shape; on_shape_changed (); repaint(); }
    ShapeType shape () const { return mShape; }

    void setScale (float scale) { mScale = scale; repaint (); }
    float scale () const { return mScale; }

    void setInterval (float interval) { mIntervalLength = interval; repaint (); }
    float interval () const { return mIntervalLength; }

    void setStepCount (int count) { mStepCount = count; repaint (); }
    int stepCount () const { return mStepCount; }

protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

signals:

public slots:

private:
    void on_shape_changed ();
    QPointF compute (float t);  // dispatch function based on mShape's arg1type
    QPointF compute_astroid (float);
    QPointF compute_cycloid (float);
    QPointF compute_huygens (float);
    QPointF compute_hypo (float);
    QPointF compute_line (float);
    QPointF compute_circle (float);
    QPointF compute_ellipse (float);
    QPointF compute_fancy (float);
    QPointF compute_starfish (float);
    QPointF compute_cloud1 (float);
    QPointF compute_cloud2 (float);
    QPointF compute_cloud_with_sign (float t, float sign);

private:
    QColor mBackGroundColor;
    ShapeType mShape;
    QPen mPen;

    float mIntervalLength;
    float mScale;
    int mStepCount;
};

#endif // RENDERAREA_H
