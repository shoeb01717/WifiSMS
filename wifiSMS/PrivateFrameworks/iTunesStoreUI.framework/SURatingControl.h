/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIImageView, UILabel;



@interface SURatingControl : UIControl 
{
    UIImageView *_backgroundImageView;
    UILabel *_explanationLabel;
    UIImageView *_foregroundImageView;
    struct CGSize { 
        float width; 
        float height; 
    } _hitPadding;
    float _starWidth;
    struct CGPoint { 
        float x; 
        float y; 
    } _trackingLastPoint;
    struct CGPoint { 
        float x; 
        float y; 
    } _trackingStartPoint;
    float _value;
}

@property(retain) NSString *explanationText;
@property float value;
@property float starWidth; /* unknown property attribute: V_starWidth */


- (id)init;
- (id)initWithBackgroundImage:(id)arg1 foregroundImage:(id)arg2;
- (void)dealloc;
- (void)layoutSubviews;
- (void)sizeToFit;
- (id)explanationText;
- (void)setHitPadding:(struct CGSize { float x1; float x2; })arg1;
- (void)setExplanationText:(id)arg1;
- (void)setValue:(float)arg1;
- (float)value;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (BOOL)canHandleSwipes;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hitRect;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)_createExplanationLabel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_foregroundImageClipBounds;
- (void)_updateValueForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (float)starWidth;
- (void)setStarWidth:(float)arg1;

@end
