/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImage;

@interface GKPhotoBrush : GKImageBrush {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _contentRect;
    } _edgeInsets;
    BOOL _flipHorizontal;
    UIImage *_overlayImage;
    float _rotation;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } contentRect;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property BOOL flipHorizontal;
@property(retain) UIImage * overlayImage;
@property float rotation;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRect;
- (void)dealloc;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withContext:(struct CGContext { }*)arg2 input:(id)arg3;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (BOOL)flipHorizontal;
- (id)overlayImage;
- (float)rotation;
- (float)scaleForInput:(id)arg1;
- (void)setContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setFlipHorizontal:(BOOL)arg1;
- (void)setOverlayImage:(id)arg1;
- (void)setRotation:(float)arg1;
- (struct CGSize { float x1; float x2; })sizeForInput:(id)arg1;

@end
