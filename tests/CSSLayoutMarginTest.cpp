/**
 * Copyright (c) 2014-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

 // @Generated by gentest/gentest.rb from gentest/fixtures/CSSLayoutMarginTest.html

#include <CSSLayout/CSSLayout.h>
#include <gtest/gtest.h>

TEST(CSSLayoutTest, margin_start) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetFlexDirection(root, CSSFlexDirectionRow);
  CSSNodeStyleSetWidth(root, 100);
  CSSNodeStyleSetHeight(root, 100);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetMargin(root_child0, CSSEdgeStart, 10);
  CSSNodeStyleSetWidth(root_child0, 10);
  CSSNodeInsertChild(root, root_child0, 0);
  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionLTR);

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root_child0));

  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionRTL);

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(80, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root_child0));

  CSSNodeFreeRecursive(root);
}

TEST(CSSLayoutTest, margin_top) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetWidth(root, 100);
  CSSNodeStyleSetHeight(root, 100);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetMargin(root_child0, CSSEdgeTop, 10);
  CSSNodeStyleSetHeight(root_child0, 10);
  CSSNodeInsertChild(root, root_child0, 0);
  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionLTR);

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetHeight(root_child0));

  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionRTL);

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetHeight(root_child0));

  CSSNodeFreeRecursive(root);
}

TEST(CSSLayoutTest, margin_end) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetFlexDirection(root, CSSFlexDirectionRow);
  CSSNodeStyleSetJustifyContent(root, CSSJustifyFlexEnd);
  CSSNodeStyleSetWidth(root, 100);
  CSSNodeStyleSetHeight(root, 100);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetMargin(root_child0, CSSEdgeEnd, 10);
  CSSNodeStyleSetWidth(root_child0, 10);
  CSSNodeInsertChild(root, root_child0, 0);
  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionLTR);

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(80, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root_child0));

  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionRTL);

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root_child0));

  CSSNodeFreeRecursive(root);
}

TEST(CSSLayoutTest, margin_bottom) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetJustifyContent(root, CSSJustifyFlexEnd);
  CSSNodeStyleSetWidth(root, 100);
  CSSNodeStyleSetHeight(root, 100);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetMargin(root_child0, CSSEdgeBottom, 10);
  CSSNodeStyleSetHeight(root_child0, 10);
  CSSNodeInsertChild(root, root_child0, 0);
  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionLTR);

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(80, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetHeight(root_child0));

  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionRTL);

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(80, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetHeight(root_child0));

  CSSNodeFreeRecursive(root);
}

TEST(CSSLayoutTest, margin_and_flex_row) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetFlexDirection(root, CSSFlexDirectionRow);
  CSSNodeStyleSetWidth(root, 100);
  CSSNodeStyleSetHeight(root, 100);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetFlexGrow(root_child0, 1);
  CSSNodeStyleSetMargin(root_child0, CSSEdgeStart, 10);
  CSSNodeInsertChild(root, root_child0, 0);
  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionLTR);

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(90, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root_child0));

  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionRTL);

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(90, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root_child0));

  CSSNodeFreeRecursive(root);
}

TEST(CSSLayoutTest, margin_and_flex_column) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetWidth(root, 100);
  CSSNodeStyleSetHeight(root, 100);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetFlexGrow(root_child0, 1);
  CSSNodeStyleSetMargin(root_child0, CSSEdgeTop, 10);
  CSSNodeInsertChild(root, root_child0, 0);
  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionLTR);

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(90, CSSNodeLayoutGetHeight(root_child0));

  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionRTL);

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(90, CSSNodeLayoutGetHeight(root_child0));

  CSSNodeFreeRecursive(root);
}

TEST(CSSLayoutTest, margin_and_stretch_row) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetFlexDirection(root, CSSFlexDirectionRow);
  CSSNodeStyleSetWidth(root, 100);
  CSSNodeStyleSetHeight(root, 100);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetFlexGrow(root_child0, 1);
  CSSNodeStyleSetMargin(root_child0, CSSEdgeTop, 10);
  CSSNodeInsertChild(root, root_child0, 0);
  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionLTR);

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(90, CSSNodeLayoutGetHeight(root_child0));

  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionRTL);

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(90, CSSNodeLayoutGetHeight(root_child0));

  CSSNodeFreeRecursive(root);
}

TEST(CSSLayoutTest, margin_and_stretch_column) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetWidth(root, 100);
  CSSNodeStyleSetHeight(root, 100);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetFlexGrow(root_child0, 1);
  CSSNodeStyleSetMargin(root_child0, CSSEdgeStart, 10);
  CSSNodeInsertChild(root, root_child0, 0);
  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionLTR);

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(10, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(90, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root_child0));

  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionRTL);

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(90, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root_child0));

  CSSNodeFreeRecursive(root);
}

TEST(CSSLayoutTest, margin_with_sibling_row) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetFlexDirection(root, CSSFlexDirectionRow);
  CSSNodeStyleSetWidth(root, 100);
  CSSNodeStyleSetHeight(root, 100);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetFlexGrow(root_child0, 1);
  CSSNodeInsertChild(root, root_child0, 0);

  const CSSNodeRef root_child1 = CSSNodeNew();
  CSSNodeStyleSetFlexGrow(root_child1, 1);
  CSSNodeInsertChild(root, root_child1, 1);
  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionLTR);

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(50, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_FLOAT_EQ(50, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root_child1));
  ASSERT_FLOAT_EQ(50, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root_child1));

  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionRTL);

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(50, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(50, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root_child1));
  ASSERT_FLOAT_EQ(50, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root_child1));

  CSSNodeFreeRecursive(root);
}

TEST(CSSLayoutTest, margin_with_sibling_column) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetWidth(root, 100);
  CSSNodeStyleSetHeight(root, 100);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetFlexGrow(root_child0, 1);
  CSSNodeInsertChild(root, root_child0, 0);

  const CSSNodeRef root_child1 = CSSNodeNew();
  CSSNodeStyleSetFlexGrow(root_child1, 1);
  CSSNodeInsertChild(root, root_child1, 1);
  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionLTR);

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(50, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_FLOAT_EQ(50, CSSNodeLayoutGetTop(root_child1));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_FLOAT_EQ(50, CSSNodeLayoutGetHeight(root_child1));

  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionRTL);

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(50, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_FLOAT_EQ(0, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_FLOAT_EQ(50, CSSNodeLayoutGetTop(root_child1));
  ASSERT_FLOAT_EQ(100, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_FLOAT_EQ(50, CSSNodeLayoutGetHeight(root_child1));

  CSSNodeFreeRecursive(root);
}
