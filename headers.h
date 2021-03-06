@interface CSwitcherFlowLayout : UICollectionViewFlowLayout
@end

@interface SBControlCenterSectionViewController : UIViewController
@end

@interface CSwitcherController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
@property (nonatomic, strong) UICollectionView *collectionView;
@property (nonatomic, strong) NSMutableArray *recentApplications;
+(CSwitcherController *)sharedInstance;
@end

@interface SBAppSwitcherModel : NSObject
+(SBAppSwitcherModel *) sharedInstance;
-(id)snapshotOfFlattenedArrayOfAppIdentifiersWhichIsOnlyTemporary;
@end

@interface SBAppSwitcherController
+(SBAppSwitcherController *)sharedController;
@end

@interface SBAppSwitcherSnapshotView : UIView
-(id)initWithDisplayItem:(id)arg1 application:(id)arg2 orientation:(long long)arg3 async:(BOOL)arg4 withQueue:(id)arg5 statusBarCache:(id)arg6 ;
@end

@interface SBApplicationController : NSObject
+(SBApplicationController *)sharedInstanceIfExists;
-(id)applicationWithBundleIdentifier:(id)arg1 ;
@end

@interface SBApplication : NSObject
@end

@interface SBIcon : NSObject
@end

@interface SBApplicationIcon : SBIcon
-(id)initWithApplication:(id)arg1 ;
@end

@interface SBIconView : UIView
@property (assign,nonatomic) id delegate;
@property (nonatomic,retain) SBIcon * icon;
-(id)initWithDefaultSize;
@end

@interface SpringBoard
-(long long)activeInterfaceOrientation;
@end

@interface SBControlCenterContentView
-(void)_addSectionController:(id)arg1 ;
@end


@interface CSwitcherCell : UICollectionViewCell
@property (nonatomic, strong) SBIconView *iconView;
@property (nonatomic, strong) SBAppSwitcherSnapshotView *snapshot;
@end

