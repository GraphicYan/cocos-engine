/****************************************************************************
 Copyright (c) 2021-2023 Xiamen Yaji Software Co., Ltd.

 http://www.cocos.com

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights to
 use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 of the Software, and to permit persons to whom the Software is furnished to do so,
 subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
****************************************************************************/

/**
 * ========================= !DO NOT CHANGE THE FOLLOWING SECTION MANUALLY! =========================
 * The following section is auto-generated.
 * ========================= !DO NOT CHANGE THE FOLLOWING SECTION MANUALLY! =========================
 */
// clang-format off
#include "RenderCommonTypes.h"

namespace cc {

namespace render {

RasterView::RasterView(const allocator_type& alloc) noexcept
: slotName(alloc),
  slotName1(alloc) {}

RasterView::RasterView(ccstd::pmr::string slotNameIn, AccessType accessTypeIn, AttachmentType attachmentTypeIn, gfx::LoadOp loadOpIn, gfx::StoreOp storeOpIn, gfx::ClearFlagBit clearFlagsIn, gfx::Color clearColorIn, gfx::ShaderStageFlagBit shaderStageFlagsIn, const allocator_type& alloc) noexcept // NOLINT
: slotName(std::move(slotNameIn), alloc),
  slotName1(alloc),
  accessType(accessTypeIn),
  attachmentType(attachmentTypeIn),
  loadOp(loadOpIn),
  storeOp(storeOpIn),
  clearFlags(clearFlagsIn),
  clearColor(clearColorIn),
  shaderStageFlags(shaderStageFlagsIn) {}

RasterView::RasterView(ccstd::pmr::string slotNameIn, ccstd::pmr::string slotName1In, AccessType accessTypeIn, AttachmentType attachmentTypeIn, gfx::LoadOp loadOpIn, gfx::StoreOp storeOpIn, gfx::ClearFlagBit clearFlagsIn, gfx::Color clearColorIn, gfx::ShaderStageFlagBit shaderStageFlagsIn, const allocator_type& alloc) noexcept // NOLINT
: slotName(std::move(slotNameIn), alloc),
  slotName1(std::move(slotName1In), alloc),
  accessType(accessTypeIn),
  attachmentType(attachmentTypeIn),
  loadOp(loadOpIn),
  storeOp(storeOpIn),
  clearFlags(clearFlagsIn),
  clearColor(clearColorIn),
  shaderStageFlags(shaderStageFlagsIn) {}

RasterView::RasterView(RasterView&& rhs, const allocator_type& alloc)
: slotName(std::move(rhs.slotName), alloc),
  slotName1(std::move(rhs.slotName1), alloc),
  accessType(rhs.accessType),
  attachmentType(rhs.attachmentType),
  loadOp(rhs.loadOp),
  storeOp(rhs.storeOp),
  clearFlags(rhs.clearFlags),
  clearColor(rhs.clearColor),
  slotID(rhs.slotID),
  shaderStageFlags(rhs.shaderStageFlags) {}

RasterView::RasterView(RasterView const& rhs, const allocator_type& alloc)
: slotName(rhs.slotName, alloc),
  slotName1(rhs.slotName1, alloc),
  accessType(rhs.accessType),
  attachmentType(rhs.attachmentType),
  loadOp(rhs.loadOp),
  storeOp(rhs.storeOp),
  clearFlags(rhs.clearFlags),
  clearColor(rhs.clearColor),
  slotID(rhs.slotID),
  shaderStageFlags(rhs.shaderStageFlags) {}

ComputeView::ComputeView(const allocator_type& alloc) noexcept
: name(alloc) {}

ComputeView::ComputeView(ccstd::pmr::string nameIn, AccessType accessTypeIn, gfx::ClearFlagBit clearFlagsIn, ClearValueType clearValueTypeIn, ClearValue clearValueIn, gfx::ShaderStageFlagBit shaderStageFlagsIn, const allocator_type& alloc) noexcept
: name(std::move(nameIn), alloc),
  accessType(accessTypeIn),
  clearFlags(clearFlagsIn),
  clearValueType(clearValueTypeIn),
  clearValue(clearValueIn),
  shaderStageFlags(shaderStageFlagsIn) {}

ComputeView::ComputeView(ccstd::pmr::string nameIn, AccessType accessTypeIn, uint32_t planeIn, gfx::ClearFlagBit clearFlagsIn, ClearValueType clearValueTypeIn, ClearValue clearValueIn, gfx::ShaderStageFlagBit shaderStageFlagsIn, const allocator_type& alloc) noexcept
: name(std::move(nameIn), alloc),
  accessType(accessTypeIn),
  plane(planeIn),
  clearFlags(clearFlagsIn),
  clearValueType(clearValueTypeIn),
  clearValue(clearValueIn),
  shaderStageFlags(shaderStageFlagsIn) {}

ComputeView::ComputeView(ComputeView&& rhs, const allocator_type& alloc)
: name(std::move(rhs.name), alloc),
  accessType(rhs.accessType),
  plane(rhs.plane),
  clearFlags(rhs.clearFlags),
  clearValueType(rhs.clearValueType),
  clearValue(rhs.clearValue),
  shaderStageFlags(rhs.shaderStageFlags) {}

ComputeView::ComputeView(ComputeView const& rhs, const allocator_type& alloc)
: name(rhs.name, alloc),
  accessType(rhs.accessType),
  plane(rhs.plane),
  clearFlags(rhs.clearFlags),
  clearValueType(rhs.clearValueType),
  clearValue(rhs.clearValue),
  shaderStageFlags(rhs.shaderStageFlags) {}

ResolvePair::ResolvePair(const allocator_type& alloc) noexcept
: source(alloc),
  target(alloc) {}

ResolvePair::ResolvePair(ccstd::pmr::string sourceIn, ccstd::pmr::string targetIn, ResolveFlags resolveFlagsIn, gfx::ResolveMode modeIn, gfx::ResolveMode mode1In, const allocator_type& alloc) noexcept // NOLINT
: source(std::move(sourceIn), alloc),
  target(std::move(targetIn), alloc),
  resolveFlags(resolveFlagsIn),
  mode(modeIn),
  mode1(mode1In) {}

ResolvePair::ResolvePair(ResolvePair&& rhs, const allocator_type& alloc)
: source(std::move(rhs.source), alloc),
  target(std::move(rhs.target), alloc),
  resolveFlags(rhs.resolveFlags),
  mode(rhs.mode),
  mode1(rhs.mode1) {}

ResolvePair::ResolvePair(ResolvePair const& rhs, const allocator_type& alloc)
: source(rhs.source, alloc),
  target(rhs.target, alloc),
  resolveFlags(rhs.resolveFlags),
  mode(rhs.mode),
  mode1(rhs.mode1) {}

CopyPair::CopyPair(const allocator_type& alloc) noexcept
: source(alloc),
  target(alloc) {}

CopyPair::CopyPair(ccstd::pmr::string sourceIn, ccstd::pmr::string targetIn, uint32_t mipLevelsIn, uint32_t numSlicesIn, uint32_t sourceMostDetailedMipIn, uint32_t sourceFirstSliceIn, uint32_t sourcePlaneSliceIn, uint32_t targetMostDetailedMipIn, uint32_t targetFirstSliceIn, uint32_t targetPlaneSliceIn, const allocator_type& alloc) noexcept // NOLINT
: source(std::move(sourceIn), alloc),
  target(std::move(targetIn), alloc),
  mipLevels(mipLevelsIn),
  numSlices(numSlicesIn),
  sourceMostDetailedMip(sourceMostDetailedMipIn),
  sourceFirstSlice(sourceFirstSliceIn),
  sourcePlaneSlice(sourcePlaneSliceIn),
  targetMostDetailedMip(targetMostDetailedMipIn),
  targetFirstSlice(targetFirstSliceIn),
  targetPlaneSlice(targetPlaneSliceIn) {}

CopyPair::CopyPair(CopyPair&& rhs, const allocator_type& alloc)
: source(std::move(rhs.source), alloc),
  target(std::move(rhs.target), alloc),
  mipLevels(rhs.mipLevels),
  numSlices(rhs.numSlices),
  sourceMostDetailedMip(rhs.sourceMostDetailedMip),
  sourceFirstSlice(rhs.sourceFirstSlice),
  sourcePlaneSlice(rhs.sourcePlaneSlice),
  targetMostDetailedMip(rhs.targetMostDetailedMip),
  targetFirstSlice(rhs.targetFirstSlice),
  targetPlaneSlice(rhs.targetPlaneSlice) {}

CopyPair::CopyPair(CopyPair const& rhs, const allocator_type& alloc)
: source(rhs.source, alloc),
  target(rhs.target, alloc),
  mipLevels(rhs.mipLevels),
  numSlices(rhs.numSlices),
  sourceMostDetailedMip(rhs.sourceMostDetailedMip),
  sourceFirstSlice(rhs.sourceFirstSlice),
  sourcePlaneSlice(rhs.sourcePlaneSlice),
  targetMostDetailedMip(rhs.targetMostDetailedMip),
  targetFirstSlice(rhs.targetFirstSlice),
  targetPlaneSlice(rhs.targetPlaneSlice) {}

MovePair::MovePair(const allocator_type& alloc) noexcept
: source(alloc),
  target(alloc) {}

MovePair::MovePair(ccstd::pmr::string sourceIn, ccstd::pmr::string targetIn, uint32_t mipLevelsIn, uint32_t numSlicesIn, uint32_t targetMostDetailedMipIn, uint32_t targetFirstSliceIn, uint32_t targetPlaneSliceIn, const allocator_type& alloc) noexcept // NOLINT
: source(std::move(sourceIn), alloc),
  target(std::move(targetIn), alloc),
  mipLevels(mipLevelsIn),
  numSlices(numSlicesIn),
  targetMostDetailedMip(targetMostDetailedMipIn),
  targetFirstSlice(targetFirstSliceIn),
  targetPlaneSlice(targetPlaneSliceIn) {}

MovePair::MovePair(MovePair&& rhs, const allocator_type& alloc)
: source(std::move(rhs.source), alloc),
  target(std::move(rhs.target), alloc),
  mipLevels(rhs.mipLevels),
  numSlices(rhs.numSlices),
  targetMostDetailedMip(rhs.targetMostDetailedMip),
  targetFirstSlice(rhs.targetFirstSlice),
  targetPlaneSlice(rhs.targetPlaneSlice) {}

MovePair::MovePair(MovePair const& rhs, const allocator_type& alloc)
: source(rhs.source, alloc),
  target(rhs.target, alloc),
  mipLevels(rhs.mipLevels),
  numSlices(rhs.numSlices),
  targetMostDetailedMip(rhs.targetMostDetailedMip),
  targetFirstSlice(rhs.targetFirstSlice),
  targetPlaneSlice(rhs.targetPlaneSlice) {}

} // namespace render

} // namespace cc

// clang-format on
