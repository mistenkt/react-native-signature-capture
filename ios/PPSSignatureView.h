#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>

@class RSSignatureViewManager;

@interface PPSSignatureView : GLKView

@property (assign, nonatomic) UIColor *strokeColor;
@property (assign, nonatomic) BOOL hasSignature;
@property (strong, nonatomic) UIImage *signatureImage;
@property (strong, nonatomic) NSMutableArray *coordinates;
@property (nonatomic, strong) RSSignatureViewManager *manager;

- (void)erase;

- (UIImage *) signatureImage;
- (UIImage *) signatureImage: (BOOL) rotatedImage;
- (UIImage *) signatureImage: (BOOL) rotatedImage withSquare:(BOOL)square;
- (NSMutableArray *) getCoordinates;

@end
