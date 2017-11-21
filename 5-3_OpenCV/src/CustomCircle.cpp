//
//  CustomCircle.cpp
//  5-3_OpenCV
//
//  Created by 武田 智道 on 2017/11/19.
//
//

#include "CustomCircle.hpp"



void CustomCircle::draw()
{
    float radius = getRadius(); //半径を取得
    glPushMatrix(); //座標を変更
        glTranslatef(getPosition().x, getPosition().y, 0); //物体の位置に座標を移動 ofFill(); //色を塗り潰す
        ofSetColor(31,127,255,100); //円1の色を設定
        ofDrawCircle(0, 0, radius); //円1を描画
        ofSetColor(31,127,255,200); //円2の色を設定
        ofDrawCircle(0, 0, radius*0.7); //円2を描画
    glPopMatrix(); //座標を元に戻す
}
