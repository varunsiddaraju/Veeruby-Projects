using UnityEngine;

using Normal.Realtime.Serialization;

[RealtimeModel]
public partial class handPoseModel
{
    [RealtimeProperty(1, true, true)]
    private string _skeletonTrackedData;
}

/* ----- Begin Normal Autogenerated Code ----- */
public partial class handPoseModel : IModel {
    // Properties
    public string skeletonTrackedData {
        get { return _cache.LookForValueInCache(_skeletonTrackedData, entry => entry.skeletonTrackedDataSet, entry => entry.skeletonTrackedData); }
        set { if (value == skeletonTrackedData) return; _cache.UpdateLocalCache(entry => { entry.skeletonTrackedDataSet = true; entry.skeletonTrackedData = value; return entry; }); FireSkeletonTrackedDataDidChange(value); }
    }
    
    // Events
    public delegate void SkeletonTrackedDataDidChange(handPoseModel model, string value);
    public event         SkeletonTrackedDataDidChange skeletonTrackedDataDidChange;
    
    // Delta updates
    private struct LocalCacheEntry {
        public bool   skeletonTrackedDataSet;
        public string skeletonTrackedData;
    }
    
    private LocalChangeCache<LocalCacheEntry> _cache;
    
    public handPoseModel() {
        _cache = new LocalChangeCache<LocalCacheEntry>();
    }
    
    // Events
    public void FireSkeletonTrackedDataDidChange(string value) {
        try {
            if (skeletonTrackedDataDidChange != null)
                skeletonTrackedDataDidChange(this, value);
        } catch (System.Exception exception) {
            Debug.LogException(exception);
        }
    }
    
    // Serialization
    enum PropertyID {
        SkeletonTrackedData = 1,
    }
    
    public int WriteLength(StreamContext context) {
        int length = 0;
        
        if (context.fullModel) {
            // Mark unreliable properties as clean and flatten the in-flight cache.
            // TODO: Move this out of WriteLength() once we have a prepareToWrite method.
            _skeletonTrackedData = skeletonTrackedData;
            _cache.Clear();
            
            // Write all properties
            length += WriteStream.WriteStringLength((uint)PropertyID.SkeletonTrackedData, _skeletonTrackedData);
        } else {
            // Reliable properties
            if (context.reliableChannel) {
                LocalCacheEntry entry = _cache.localCache;
                if (entry.skeletonTrackedDataSet)
                    length += WriteStream.WriteStringLength((uint)PropertyID.SkeletonTrackedData, entry.skeletonTrackedData);
            }
        }
        
        return length;
    }
    
    public void Write(WriteStream stream, StreamContext context) {
        if (context.fullModel) {
            // Write all properties
            stream.WriteString((uint)PropertyID.SkeletonTrackedData, _skeletonTrackedData);
        } else {
            // Reliable properties
            if (context.reliableChannel) {
                LocalCacheEntry entry = _cache.localCache;
                if (entry.skeletonTrackedDataSet)
                    _cache.PushLocalCacheToInflight(context.updateID);
                
                if (entry.skeletonTrackedDataSet)
                    stream.WriteString((uint)PropertyID.SkeletonTrackedData, entry.skeletonTrackedData);
            }
        }
    }
    
    public void Read(ReadStream stream, StreamContext context) {
        bool skeletonTrackedDataExistsInChangeCache = _cache.ValueExistsInCache(entry => entry.skeletonTrackedDataSet);
        
        // Remove from in-flight
        if (context.deltaUpdatesOnly && context.reliableChannel)
            _cache.RemoveUpdateFromInflight(context.updateID);
        
        // Loop through each property and deserialize
        uint propertyID;
        while (stream.ReadNextPropertyID(out propertyID)) {
            switch (propertyID) {
                case (uint)PropertyID.SkeletonTrackedData: {
                    string previousValue = _skeletonTrackedData;
                    
                    _skeletonTrackedData = stream.ReadString();
                    
                    if (!skeletonTrackedDataExistsInChangeCache && _skeletonTrackedData != previousValue)
                        FireSkeletonTrackedDataDidChange(_skeletonTrackedData);
                    break;
                }
                default:
                    stream.SkipProperty();
                    break;
            }
        }
    }
}
/* ----- End Normal Autogenerated Code ----- */
