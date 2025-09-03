#include "OgreVulkanRayTracing.h"

#include "OgreVulkanDevice.h"

void Ogre::VulkanRayTracer::initRaytracer(const VulkanDevice& device)
{
    VkPhysicalDeviceProperties2 prop2;
    prop2.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2;
    prop2.pNext = &mRtProperties;
    vkGetPhysicalDeviceProperties2(device.mPhysicalDevice, &prop2);
}