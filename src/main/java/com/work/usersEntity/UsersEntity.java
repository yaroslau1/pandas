package com.work.usersEntity;

import javax.persistence.*;

@Entity
@Table(name = "users", schema = "tests")
public class UsersEntity {
    private int idUsers;
    private String nameUsers;
    private String password;
    private String role;

    public UsersEntity() {
    }

    public UsersEntity(String nameUsers, String password, String role){
        this.nameUsers=nameUsers;
        this.password=password;
        this.role=role;

    }

    @Id
    @Column(name = "idUsers", nullable = false)
    public int getIdUsers() {
        return idUsers;
    }

    public void setIdUsers(int idUsers) {
        this.idUsers = idUsers;
    }

    @Basic
    @Column(name = "nameUsers", nullable = false, length = 45)
    public String getNameUsers() {
        return nameUsers;
    }

    public void setNameUsers(String nameUsers) {
        this.nameUsers = nameUsers;
    }

    @Basic
    @Column(name = "password", nullable = false, length = 45)
    public String getPassword() {
        return password;
    }

    public void setPassword(String password) {
        this.password = password;
    }

    @Basic
    @Column(name = "role", nullable = false, length = 45)
    public String getRole() {
        return role;
    }

    public void setRole(String role) {
        this.role = role;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;

        UsersEntity that = (UsersEntity) o;

        if (idUsers != that.idUsers) return false;
        if (nameUsers != null ? !nameUsers.equals(that.nameUsers) : that.nameUsers != null) return false;
        if (password != null ? !password.equals(that.password) : that.password != null) return false;
        if (role != null ? !role.equals(that.role) : that.role != null) return false;

        return true;
    }

    @Override
    public int hashCode() {
        int result = idUsers;
        result = 31 * result + (nameUsers != null ? nameUsers.hashCode() : 0);
        result = 31 * result + (password != null ? password.hashCode() : 0);
        result = 31 * result + (role != null ? role.hashCode() : 0);
        return result;
    }

    @Override
    public String toString() {
        return idUsers + " " + nameUsers + " " + password + " " + role;
    }
}
