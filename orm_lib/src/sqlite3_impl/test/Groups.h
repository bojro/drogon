/**
 *
 *  Groups.h
 *  DO NOT EDIT. This file is generated by drogon_ctl
 *
 */

#pragma once
#include <drogon/orm/Field.h>
#include <drogon/orm/Mapper.h>
#include <drogon/orm/Result.h>
#include <drogon/orm/Row.h>
#include <drogon/orm/SqlBinder.h>
#include <iostream>
#include <json/json.h>
#include <memory>
#include <stdint.h>
#include <string>
#include <trantor/utils/Date.h>
#include <tuple>
#include <vector>
using namespace drogon::orm;

namespace drogon_model
{
namespace sqlite3
{
class Groups
{
  public:
    struct Cols
    {
        static const std::string group_id;
        static const std::string group_name;
        static const std::string creater_id;
        static const std::string create_time;
        static const std::string inviting;
        static const std::string inviting_user_id;
        static const std::string avatar_id;
        static const std::string uuu;
        static const std::string text;
        static const std::string avatar;
    };

    const static int primaryKeyNumber;
    const static std::string tableName;
    const static bool hasPrimaryKey;
    const static std::string primaryKeyName;
    typedef uint64_t PrimaryKeyType;
    const PrimaryKeyType &getPrimaryKey() const;
    Groups(const Row &r) noexcept;
    Groups() = default;

    /**  For column group_id  */
    /// Get the value of the column group_id, returns the default value if the
    /// column is null
    const uint64_t &getValueOfGroupId(const uint64_t &defaultValue = uint64_t()) const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an empty
    /// shared_ptr object if the column is null
    std::shared_ptr<const uint64_t> getGroupId() const noexcept;

    /**  For column group_name  */
    /// Get the value of the column group_name, returns the default value if the
    /// column is null
    const std::string &getValueOfGroupName(const std::string &defaultValue = std::string()) const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an empty
    /// shared_ptr object if the column is null
    std::shared_ptr<const std::string> getGroupName() const noexcept;
    /// Set the value of the column group_name
    void setGroupName(const std::string &groupName) noexcept;
    void setGroupName(std::string &&groupName) noexcept;

    /**  For column creater_id  */
    /// Get the value of the column creater_id, returns the default value if the
    /// column is null
    const uint64_t &getValueOfCreaterId(const uint64_t &defaultValue = uint64_t()) const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an empty
    /// shared_ptr object if the column is null
    std::shared_ptr<const uint64_t> getCreaterId() const noexcept;
    /// Set the value of the column creater_id
    void setCreaterId(const uint64_t &createrId) noexcept;

    /**  For column create_time  */
    /// Get the value of the column create_time, returns the default value if the
    /// column is null
    const std::string &getValueOfCreateTime(const std::string &defaultValue = std::string()) const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an empty
    /// shared_ptr object if the column is null
    std::shared_ptr<const std::string> getCreateTime() const noexcept;
    /// Set the value of the column create_time
    void setCreateTime(const std::string &createTime) noexcept;
    void setCreateTime(std::string &&createTime) noexcept;

    /**  For column inviting  */
    /// Get the value of the column inviting, returns the default value if the
    /// column is null
    const uint64_t &getValueOfInviting(const uint64_t &defaultValue = uint64_t()) const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an empty
    /// shared_ptr object if the column is null
    std::shared_ptr<const uint64_t> getInviting() const noexcept;
    /// Set the value of the column inviting
    void setInviting(const uint64_t &inviting) noexcept;

    /**  For column inviting_user_id  */
    /// Get the value of the column inviting_user_id, returns the default value if
    /// the column is null
    const uint64_t &getValueOfInvitingUserId(const uint64_t &defaultValue = uint64_t()) const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an empty
    /// shared_ptr object if the column is null
    std::shared_ptr<const uint64_t> getInvitingUserId() const noexcept;
    /// Set the value of the column inviting_user_id
    void setInvitingUserId(const uint64_t &invitingUserId) noexcept;

    /**  For column avatar_id  */
    /// Get the value of the column avatar_id, returns the default value if the
    /// column is null
    const std::string &getValueOfAvatarId(const std::string &defaultValue = std::string()) const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an empty
    /// shared_ptr object if the column is null
    std::shared_ptr<const std::string> getAvatarId() const noexcept;
    /// Set the value of the column avatar_id
    void setAvatarId(const std::string &avatarId) noexcept;
    void setAvatarId(std::string &&avatarId) noexcept;

    /**  For column uuu  */
    /// Get the value of the column uuu, returns the default value if the column
    /// is null
    const double &getValueOfUuu(const double &defaultValue = double()) const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an empty
    /// shared_ptr object if the column is null
    std::shared_ptr<const double> getUuu() const noexcept;
    /// Set the value of the column uuu
    void setUuu(const double &uuu) noexcept;

    /**  For column text  */
    /// Get the value of the column text, returns the default value if the column
    /// is null
    const std::string &getValueOfText(const std::string &defaultValue = std::string()) const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an empty
    /// shared_ptr object if the column is null
    std::shared_ptr<const std::string> getText() const noexcept;
    /// Set the value of the column text
    void setText(const std::string &text) noexcept;
    void setText(std::string &&text) noexcept;

    /**  For column avatar  */
    /// Get the value of the column avatar, returns the default value if the
    /// column is null
    const std::vector<char> &getValueOfAvatar(const std::vector<char> &defaultValue = std::vector<char>()) const noexcept;
    /// Return the column value by std::string with binary data
    std::string getValueOfAvatarAsString(const std::string &defaultValue = "") const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an empty
    /// shared_ptr object if the column is null
    std::shared_ptr<const std::vector<char>> getAvatar() const noexcept;
    /// Set the value of the column avatar
    void setAvatar(const std::vector<char> &avatar) noexcept;
    void setAvatar(const std::string &avatar) noexcept;

    static size_t getColumnNumber() noexcept
    {
        return 10;
    }
    static const std::string &getColumnName(size_t index) noexcept(false);

    Json::Value toJson() const;

  private:
    friend Mapper<Groups>;
    static const std::vector<std::string> &insertColumns() noexcept;
    void outputArgs(drogon::orm::internal::SqlBinder &binder) const;
    const std::vector<std::string> updateColumns() const;
    void updateArgs(drogon::orm::internal::SqlBinder &binder) const;
    /// For mysql or sqlite3
    void updateId(const uint64_t id);
    std::shared_ptr<uint64_t> _groupId;
    std::shared_ptr<std::string> _groupName;
    std::shared_ptr<uint64_t> _createrId;
    std::shared_ptr<std::string> _createTime;
    std::shared_ptr<uint64_t> _inviting;
    std::shared_ptr<uint64_t> _invitingUserId;
    std::shared_ptr<std::string> _avatarId;
    std::shared_ptr<double> _uuu;
    std::shared_ptr<std::string> _text;
    std::shared_ptr<std::vector<char>> _avatar;
    struct MetaData
    {
        const std::string _colName;
        const std::string _colType;
        const std::string _colDatabaseType;
        const ssize_t _colLength;
        const bool _isAutoVal;
        const bool _isPrimaryKey;
        const bool _notNull;
    };
    static const std::vector<MetaData> _metaData;
    bool _dirtyFlag[10] = {false};
};

}  // namespace sqlite3
}  // namespace drogon_model
