//
//  BattleReady_Scene.h
//  testproject
//
//  Created by ZHOUTAO on 15/2/13.
//
//

#ifndef __testproject__BattleReady_Scene__
#define __testproject__BattleReady_Scene__

#include <stdio.h>

#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include "CocosGUI.h"
#include "Player.h"

class BattleReady_Scene : public cocos2d::Layer
{
public:

    
    static cocos2d::Scene* createScene();
    
    BattleReady_Scene();
    ~BattleReady_Scene();
    virtual bool init();

    
    CREATE_FUNC(BattleReady_Scene);
    
    bool onTouchBegan(cocos2d::Touch* touch, cocos2d::Event* event);
    void onTouchEnded(cocos2d::Touch* touch, cocos2d::Event* event);
    void onListTurnEvent(cocos2d::Ref *obj, cocos2d::ui::PageView::EventType event);
    void onListUnitTouchEvent(cocos2d::Ref* ref, cocos2d::ui::Widget::TouchEventType type);
    void onTeamUnitTouchEvent(cocos2d::Ref* ref, cocos2d::ui::Widget::TouchEventType type);
    void onUnitDetalTouchEvent(cocos2d::Ref* ref, cocos2d::ui::Widget::TouchEventType type);
    void onStartTouchEvent(cocos2d::Ref* ref, cocos2d::ui::Widget::TouchEventType type);
    void onSkillBtnTouchEvent(cocos2d::Ref* ref, cocos2d::ui::Widget::TouchEventType type); // 技能按钮回调
    void onSkillPanelTouchEvent(cocos2d::Ref* ref, cocos2d::ui::Widget::TouchEventType type);   // 技能界面触摸回调
    void onUnitPanelTouchEvent(cocos2d::Ref* ref, cocos2d::ui::Widget::TouchEventType type);   // 技能界面触摸回调
    void onReturnTouchEvent(cocos2d::Ref* ref, cocos2d::ui::Widget::TouchEventType type);   // 返回按钮回调
    
    void updateUnitList(Player::HERO_MAP& heroMap);     // 更新角色列表
    void showUnit(HeroRef hero);      //显示英雄信息
    void showUnitDetal(HeroRef hero);      //显示英雄详细信息
    void showSkill(Node* node, U32 skillId);    // 显示英雄技能
private:
    
    cocos2d::Node* m_root;  // cocostudio跟节点
    cocos2d::ui::PageView* m_unitList;  // 角色列表
    cocos2d::ui::Layout*   m_unit;      // 角色信息
    cocos2d::ui::Layout*   m_unitTeam;  // 上场角色队伍
    cocos2d::ui::PageView* m_unitDetal; // 角色详细
    cocos2d::ui::Layout*   m_unitDetalBg;   //角色详细的BG
    cocos2d::ui::Layout*   m_unitSkill;  // 角色技能界面
    
    cocos2d::Node* m_selectedUnitWidget;   //选择单位的框
    cocos2d::Node* m_teamUnitWidget[6];   //队伍保存的单位框
};

#endif /* defined(__testproject__BattleReady_Scene__) */
