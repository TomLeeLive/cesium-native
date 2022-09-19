// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "CesiumGltf/Library.h"

#include <CesiumUtility/ExtensibleObject.h>

#include <cstdint>
#include <vector>

namespace CesiumGltf {
/**
 * @brief The padding property specifies how many rows of attribute data in each
 * dimension come from neighboring grids.
 */
struct CESIUMGLTF_API Padding final : public CesiumUtility::ExtensibleObject {
  static inline constexpr const char* TypeName = "Padding";

  /**
   * @brief before
   */
  std::vector<int64_t> before;

  /**
   * @brief after
   */
  std::vector<int64_t> after;
};
} // namespace CesiumGltf