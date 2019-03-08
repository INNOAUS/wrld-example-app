// Generated by Apple Swift version 4.1 (swiftlang-902.0.48 clang-902.0.37.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import CoreLocation;
@import WrldUtils;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="WrldNav",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

enum WRLDNavEvent : NSInteger;

SWIFT_PROTOCOL("_TtP7WrldNav28WRLDNavModelObserverProtocol_")
@protocol WRLDNavModelObserverProtocol
@optional
/// Re-implement this if you need to know when the model has been set.
- (void)modelSet;
/// Re-implement this to receive property changes from the model.
- (void)changeReceived:(NSString * _Nonnull)keyPath;
/// Re-implement this to receive events from the model.
- (void)eventReceived:(enum WRLDNavEvent)key;
@end

@class WRLDNavModelObserver;
@class NSCoder;
@class UICollectionView;
@class UICollectionViewCell;
@class UIScrollView;
@class UICollectionViewLayout;

SWIFT_CLASS("_TtC7WrldNav27WRLDNavCurrentDirectionView")
@interface WRLDNavCurrentDirectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WRLDNavModelObserverProtocol>
@property (nonatomic, strong) WRLDNavModelObserver * _Nonnull observer;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
- (void)modelSet;
- (void)changeReceived:(NSString * _Nonnull)keyPath;
- (void)eventReceived:(enum WRLDNavEvent)key;
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)scrollViewWillBeginDragging:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewDidEndScrollingAnimation:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewDidEndDecelerating:(UIScrollView * _Nonnull)scrollView;
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end


/// This type is used to describe a single direction in a list of directions that form a route.
SWIFT_CLASS("_TtC7WrldNav16WRLDNavDirection")
@interface WRLDNavDirection : NSObject
/// Initialize an interior or exterior direction.
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name_ icon:(NSString * _Nonnull)icon_ instruction:(NSString * _Nonnull)instruction_ thenInstruction:(NSString * _Nonnull)thenInstruction_ path:(NSArray<NSValue *> * _Nonnull)path_ indoorID:(NSString * _Nullable)indoorID_ floorID:(NSInteger)floorID_ isMultiFloor:(BOOL)isMultiFloor_ OBJC_DESIGNATED_INITIALIZER;
/// The short name of this instruction.
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
/// The name of the icon. This gets prefixed to sellect the correct icon from the assets.
@property (nonatomic, readonly, copy) NSString * _Nonnull icon;
/// The main part of the instruction for this step.
@property (nonatomic, readonly, copy) NSString * _Nonnull instruction;
/// The then instruction for this step.
@property (nonatomic, readonly, copy) NSString * _Nonnull thenInstruction;
/// The geographic path of this direction.
@property (nonatomic, readonly, copy) NSArray<NSValue *> * _Nonnull path;
/// The name of the building that this location is within, or nil if this is not applicable.
@property (nonatomic, readonly, copy) NSString * _Nullable indoorID;
/// The floor that this location is on or 0 if not applicable.
@property (nonatomic, readonly) NSInteger floorID;
/// Whether the direction is multifloor or not
@property (nonatomic, readonly) BOOL isMultiFloor;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class UITableView;
@class UITableViewCell;

SWIFT_CLASS("_TtC7WrldNav21WRLDNavDirectionsView")
@interface WRLDNavDirectionsView : UIView <UITableViewDataSource, UITableViewDelegate, WRLDNavModelObserverProtocol>
@property (nonatomic, strong) WRLDNavModelObserver * _Nonnull observer;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView willDisplayCell:(UITableViewCell * _Nonnull)cell forRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)changeReceived:(NSString * _Nonnull)keyPath;
- (void)eventReceived:(enum WRLDNavEvent)key;
- (NSIndexPath * _Nullable)tableView:(UITableView * _Nonnull)tableView willSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end

/// This describes the different events that can be sent out to the nav model.
typedef SWIFT_ENUM(NSInteger, WRLDNavEvent) {
  WRLDNavEventUnknown = 0,
  WRLDNavEventStartEndButtonClicked = 1,
  WRLDNavEventSelectStartLocationClicked = 2,
  WRLDNavEventSelectEndLocationClicked = 3,
  WRLDNavEventCloseSetupJourneyClicked = 4,
  WRLDNavEventWidgetAnimateOut = 5,
  WRLDNavEventWidgetAnimateIn = 6,
  WRLDNavEventShowHideListButtonClicked = 7,
  WRLDNavEventStartEndLocationsSwapped = 8,
  WRLDNavEventStartLocationClearButtonClicked = 9,
  WRLDNavEventEndLocationClearButtonClicked = 10,
  WRLDNavEventRouteUpdated = 11,
};


/// This type is used to describe a location on the map, primarily this is used for the start and end
/// locations of a route.
SWIFT_CLASS("_TtC7WrldNav15WRLDNavLocation")
@interface WRLDNavLocation : NSObject
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name_ latLon:(CLLocationCoordinate2D)latLon_ indoorID:(NSString * _Nullable)indoorID_ floorID:(NSInteger)floorID_ OBJC_DESIGNATED_INITIALIZER;
/// The name of this location, this is what should be displayed in a search text box.
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
/// Latitude and Longitude of the location.
@property (nonatomic, readonly) CLLocationCoordinate2D latLon;
/// The name of the building that this location is within, or nil if this is not applicable.
@property (nonatomic, readonly, copy) NSString * _Nullable indoorID;
/// The floor that this location is on or 0 if not applicable.
@property (nonatomic, readonly) NSInteger floorID;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

/// This describes the different states that the nav model can be in.
typedef SWIFT_ENUM(NSInteger, WRLDNavMode) {
  WRLDNavModeNotReady = 0,
  WRLDNavModeReady = 1,
  WRLDNavModeActive = 2,
  WRLDNavModeReadyNoTurnByTurn = 3,
};

@class WRLDNavRoute;
@protocol WRLDNavModelEventListener;

/// This is the model that holds the data that the views display.
SWIFT_CLASS("_TtC7WrldNav12WRLDNavModel")
@interface WRLDNavModel : NSObject
@property (nonatomic, strong) WRLDNavLocation * _Nullable startLocation;
@property (nonatomic, strong) WRLDNavLocation * _Nullable endLocation;
@property (nonatomic, strong) WRLDNavRoute * _Nullable route;
@property (nonatomic) NSInteger selectedDirectionIndex;
@property (nonatomic) NSInteger currentDirectionIndex;
/// The details of the current direction. This is the direction step that the location is currently
/// at or have just passed.
@property (nonatomic, strong) WRLDNavDirection * _Nullable currentDirection;
/// Sets the direction at a set index.
/// @param index The index for the new direction
/// @param direction The new direction
/// @return Bool if been successful
- (BOOL)setDirection:(NSInteger)index direction:(WRLDNavDirection * _Nullable)direction SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic) NSTimeInterval remainingRouteDuration;
@property (nonatomic) enum WRLDNavMode navMode;
/// Call this to reveive events from the model. The listener will need to implement the
/// eventReceived method, see WRLDNavModelEventListener for an example.
/// @note You will also need to call unregisterEventListener before destruction.
/// @param listener The listener to receive events.
- (void)registerNavEventListener:(id <WRLDNavModelEventListener> _Nonnull)listener;
/// Call this to stop a listener from receiving events.
- (void)unregisterNavEventListener:(id <WRLDNavModelEventListener> _Nonnull)listener;
/// Send a nav event to all listeners.
- (void)sendNavEvent:(enum WRLDNavEvent)key;
+ (BOOL)automaticallyNotifiesObserversForKey:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Implement this protocol to receive nav model events.
SWIFT_PROTOCOL("_TtP7WrldNav25WRLDNavModelEventListener_")
@protocol WRLDNavModelEventListener
@optional
/// Called when a nav event is received.
- (void)eventReceived:(enum WRLDNavEvent)key;
@end


SWIFT_CLASS("_TtC7WrldNav20WRLDNavModelObserver")
@interface WRLDNavModelObserver : NSObject <WRLDNavModelEventListener>
@property (nonatomic, weak) id <WRLDNavModelObserverProtocol> _Nullable delegate;
/// Call this to register for changes from the WRLDNavModel.
/// When a change that you have registered for occurs the changeReceived method will be called.
- (void)registerObserver:(NSString * _Nonnull)observerKey;
/// Call this after registering observers.
- (void)setNavModel:(WRLDNavModel * _Nonnull)navModel;
/// Returns the model that we are observing.
- (WRLDNavModel * _Nullable)navModel SWIFT_WARN_UNUSED_RESULT;
/// Called by the WrldNavModelEventListener when a nav event is received.
- (void)eventReceived:(enum WRLDNavEvent)key;
/// Called by observed properties.
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSKeyValueChangeKey, id> * _Nullable)change context:(void * _Nullable)context;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC7WrldNav24WRLDNavNextDirectionView")
@interface WRLDNavNextDirectionView : UIView <WRLDNavModelObserverProtocol>
@property (nonatomic, strong) WRLDNavModelObserver * _Nonnull observer;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)modelSet;
- (void)changeReceived:(NSString * _Nonnull)keyPath;
- (void)eventReceived:(enum WRLDNavEvent)key;
@end


/// A list of directions that forms a route.
SWIFT_CLASS("_TtC7WrldNav12WRLDNavRoute")
@interface WRLDNavRoute : NSObject
/// Initialize a route with a list of directions.
- (nonnull instancetype)initWithEstimatedRouteDuration:(NSTimeInterval)estimatedRouteDuration_ directions:(NSArray<WRLDNavDirection *> * _Nonnull)directions_ OBJC_DESIGNATED_INITIALIZER;
/// The estimated total duration of the route.
@property (nonatomic, readonly) NSTimeInterval estimatedRouteDuration;
@property (nonatomic, readonly, copy) NSArray<WRLDNavDirection *> * _Nonnull directions;
/// Update direction at the given index.
- (void)updateDirectionWithIndex:(NSInteger)index_ direction:(WRLDNavDirection * _Nonnull)direction_;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class UITextField;
@class WRLDUtilsTextField;

SWIFT_CLASS("_TtC7WrldNav23WRLDNavSetupJourneyView")
@interface WRLDNavSetupJourneyView : UIView <UITextFieldDelegate, WRLDNavModelObserverProtocol, WRLDUtilsTextFieldDelegate>
@property (nonatomic, strong) WRLDNavModelObserver * _Nonnull observer;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)modelSet;
- (void)changeReceived:(NSString * _Nonnull)keyPath;
- (BOOL)textFieldShouldBeginEditing:(UITextField * _Nonnull)textField SWIFT_WARN_UNUSED_RESULT;
- (void)rightButtonClickedWithTextField:(WRLDUtilsTextField * _Nonnull)textField;
- (void)leftButtonClickedWithTextField:(WRLDUtilsTextField * _Nonnull)textField;
@end

@class UILabel;
@class UIButton;

SWIFT_CLASS("_TtC7WrldNav28WRLDNavTimeToDestinationView")
@interface WRLDNavTimeToDestinationView : UIView <WRLDNavModelObserverProtocol>
@property (nonatomic, strong) WRLDNavModelObserver * _Nonnull observer;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified timeBigNumber;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified timeSmallNumber;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified timeBigUnits;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified timeSmallUnits;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified startEndButton;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)modelSet;
- (void)changeReceived:(NSString * _Nonnull)keyPath;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
